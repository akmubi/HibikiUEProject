#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkTriggerBox.h"
#include "HbkSetPlayerRestartPosTrigger.generated.h"

class AActor;

UCLASS(Blueprintable)
class HIBIKI_API AHbkSetPlayerRestartPosTrigger : public AHbkTriggerBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> RestartPosActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActivateTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName activateCallSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DeactivateTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName deactivateCallSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bActivePoint;
    
public:
    AHbkSetPlayerRestartPosTrigger(const FObjectInitializer& ObjectInitializer);

};

