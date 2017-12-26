#include <iostream>

#include <modules/audio_processing/include/audio_processing.h>
#include <modules/interface/module_common_types.h>

using namespace std;
using namespace webrtc;

int main() {
  cout << "try to use webrtc audio processing." << endl;
  AudioFrame frame;
  int16_t buf[480];
  for(int i = 0;i < 480;++ i) {
    buf[i] = i;
  }
  frame.UpdateFrame(
    0, // id
    0, // timestamp
    buf, // data
    480, // sample per channel
    48000, // sample_rate
    AudioFrame::kNormalSpeech, // speech type
    AudioFrame::kVadActive); // vad activity
  AudioProcessing* apm = AudioProcessing::Create();
  apm->Initialize(
    48000, // input samplerate
    48000, // output samplerate
    48000, // reverse samplerate
    AudioProcessing::ChannelLayout::kMono, // input channel layout
    AudioProcessing::ChannelLayout::kMono, // output channel layout
    AudioProcessing::ChannelLayout::kMono  // reverse channel layout
  );
  apm->high_pass_filter()->Enable(true);
  apm->echo_cancellation()->enable_drift_compensation(false);
  apm->echo_cancellation()->Enable(true);

  apm->noise_suppression()->set_level(NoiseSuppression::Level::kHigh);
  apm->noise_suppression()->Enable(true);

  apm->gain_control()->set_analog_level_limits(0, 255);
  apm->gain_control()->set_mode(GainControl::Mode::kAdaptiveDigital);
  apm->gain_control()->Enable(true);

  for(int i = 0;i < 4;++ i) {
    apm->ProcessReverseStream(&frame);
    apm->set_stream_delay_ms(10);
    int err = apm->ProcessStream(&frame);
    cout << "result:" << err << endl;
    int16_t *buf = (int16_t *)frame.data_;
    for(int i = 0;i < 16;++ i) {
      cout << buf[i] << endl;
    }
  }
  delete apm;
  return 0;
}
