#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AttackInterface.h"
#include "HbkEm6000_MovingEmbankment.generated.h"

class AHbkEm6000_Roquefort;
class AHbkEm6000_StageController;
class UAnimMontage;
class UHbkCoinBlockerComponent;
class UHbkImproveAttackComponent;
class UHbkRhythmSynchroComponent;
class UHbkRhythmSynchroSignalComponent;
class UHbkSkeletalMeshComponent;

UCLASS(Blueprintable)
class AHbkEm6000_MovingEmbankment : public AActor, public IAttackInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* EmbankmentSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkImproveAttackComponent* ImproveAttackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroComponent* RhythmSynchroComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroSignalComponent* RhythmSynchroSignalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCoinBlockerComponent* CoinBlockerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEm6000_StageController> StageController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEm6000_Roquefort> Boss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MoveAnim;
    
public:
    AHbkEm6000_MovingEmbankment(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

