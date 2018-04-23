/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class DistortionVstAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    DistortionVstAudioProcessorEditor (DistortionVstAudioProcessor&);
    ~DistortionVstAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:

	ScopedPointer<Slider> driveKnob;
	ScopedPointer<Slider> rangeKnob;
	ScopedPointer<Slider> blendKnob;
	ScopedPointer<Slider> volumeKnob;

	ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> driveAttatchment;
	ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> rangeAttatchment;
	ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> blendAttatchment;
	ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> volumeAttatchment;


    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    DistortionVstAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DistortionVstAudioProcessorEditor)
};
