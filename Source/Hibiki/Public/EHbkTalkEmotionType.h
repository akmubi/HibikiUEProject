#pragma once
#include "CoreMinimal.h"
#include "EHbkTalkEmotionType.generated.h"

UENUM(BlueprintType)
enum class EHbkTalkEmotionType : uint8 {
    TEMO_Normal,
    TEMO_Anger,
    TEMO_Disgust,
    TEMO_Happy,
    TEMO_Pleasure,
    TEMO_Sarcasm,
    TEMO_Sorrow,
    TEMO_Surprise,
    TEMO_Serious,
    TEMO_Worry,
    TEMO_Skeptical,
    TEMO_WierdedOut,
    TEMO_Confident,
    TEMO_Evil,
    TEMO_Pain,
    TEMO_Thinking,
    TEMO_Annoyed,
    TEMO_Panic,
};

