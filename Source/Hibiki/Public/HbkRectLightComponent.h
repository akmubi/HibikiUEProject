#pragma once
#include "CoreMinimal.h"
#include "Components/RectLightComponent.h"
#include "EHbkGameEnvPhaseStartEditorState.h"
#include "HbkLightComponentPhase.h"
#include "HbkRectLightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkRectLightComponent : public URectLightComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGameEnvPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGameEnvPhaseStartEditorState PhaseStartEditorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkLightComponentPhase GameEnvPhaseStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkLightComponentPhase GameEnvPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkLightComponentPhase GameEnvPhaseC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkLightComponentPhase GameEnvPhaseD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkLightComponentPhase GameEnvPhaseE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkLightComponentPhase GameEnvPhaseF;
    
public:
    UHbkRectLightComponent(const FObjectInitializer& ObjectInitializer);

};

