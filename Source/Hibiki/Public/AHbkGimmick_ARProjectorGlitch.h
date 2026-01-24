#pragma once
#include "CoreMinimal.h"
#include "EHbkGlitchState.h"
#include "AHbkGimmick_ARProjectorGlitch.generated.h"

USTRUCT(BlueprintType)
struct FAHbkGimmick_ARProjectorGlitch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGlitchState Start1State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Start1Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGlitchState Start2State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGeneratorMiniGameInputState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGlitchState GeneratorMiniGameInputState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGlitchState GeneratorMiniGameSuccessState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGlitchState MacaronPunchStartState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGlitchState MacaronPunchEndState;
    
    HIBIKI_API FAHbkGimmick_ARProjectorGlitch();
};

