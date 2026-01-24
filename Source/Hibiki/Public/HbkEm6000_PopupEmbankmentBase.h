#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AttackInterface.h"
#include "HbkEm6000_PopupEmbankmentBase.generated.h"

class AHbkEm6000_Roquefort;
class AHbkEm6000_StageController;
class UHbkCoinBlockerComponent;
class UHbkRhythmSynchroComponent;

UCLASS(Blueprintable)
class AHbkEm6000_PopupEmbankmentBase : public AActor, public IAttackInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroComponent* RhythmSynchroComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCoinBlockerComponent* CoinBlockerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEm6000_StageController> StageController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEm6000_Roquefort> Boss;
    
public:
    AHbkEm6000_PopupEmbankmentBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

