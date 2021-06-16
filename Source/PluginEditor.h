/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class JuiceAudioEQAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    JuiceAudioEQAudioProcessorEditor (JuiceAudioEQAudioProcessor&);
    ~JuiceAudioEQAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    JuiceAudioEQAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (JuiceAudioEQAudioProcessorEditor)
};
