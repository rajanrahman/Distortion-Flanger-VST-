/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
DistortionVstAudioProcessorEditor::DistortionVstAudioProcessorEditor (DistortionVstAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
	addAndMakeVisible(driveKnob = new Slider("Drive"));
	driveKnob->setSliderStyle(Slider::Rotary);
	driveKnob->setTextBoxStyle(Slider::NoTextBox, false, 100, 100);

	addAndMakeVisible(rangeKnob = new Slider("Range"));
	rangeKnob->setSliderStyle(Slider::Rotary);
	rangeKnob->setTextBoxStyle(Slider::NoTextBox, false, 100, 100);

	addAndMakeVisible(blendKnob = new Slider("Blend"));
	blendKnob->setSliderStyle(Slider::Rotary);
	blendKnob->setTextBoxStyle(Slider::NoTextBox, false, 100, 100);

	addAndMakeVisible(volumeKnob = new Slider("Volume"));
	volumeKnob->setSliderStyle(Slider::Rotary);
	volumeKnob->setTextBoxStyle(Slider::NoTextBox, false, 100, 100);

	driveAttatchment = new AudioProcessorValueTreeState::SliderAttachment(p.getState(), "drive", *driveKnob);
	driveAttatchment = new AudioProcessorValueTreeState::SliderAttachment(p.getState(), "range", *rangeKnob);
	driveAttatchment = new AudioProcessorValueTreeState::SliderAttachment(p.getState(), "blend", *blendKnob);
	driveAttatchment = new AudioProcessorValueTreeState::SliderAttachment(p.getState(), "volume", *volumeKnob);
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (500, 200);
}

DistortionVstAudioProcessorEditor::~DistortionVstAudioProcessorEditor()
{
}

//==============================================================================
void DistortionVstAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::white);
    g.setFont (15.0f);
    //g.drawFittedText ("Hello World!", getLocalBounds(), Justification::centred, 1);
}

void DistortionVstAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..

	driveKnob->setBounds(((getWidth() / 5) * 1) - (100 /2),  (getHeight() / 2) - (100 / 2), 100, 100);
	rangeKnob->setBounds(((getWidth() / 5) * 2) - (100 / 2), (getHeight() / 2) - (100 / 2), 100, 100);
	blendKnob->setBounds(((getWidth() / 5) * 3) - (100 / 2), (getHeight() / 2) - (100 / 2), 100, 100);
	volumeKnob->setBounds(((getWidth() / 5) * 4) - (100 / 2), (getHeight() / 2) - (100 / 2), 100, 100);
}
