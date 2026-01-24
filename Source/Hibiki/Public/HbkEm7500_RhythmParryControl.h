#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BossRhythmAttackParam.h"
#include "EHbkEm7500RhythmParryType.h"
#include "HbkEm7500AttackNoticeParam.h"
#include "Templates/SubclassOf.h"
#include "HbkEm7500_RhythmParryControl.generated.h"

class AHbkEm7500_Kale;
class AHbkEm7500_StageController;
class AHbkEnemyCharacter;
class UDamageType;
class UTexture2D;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm7500_RhythmParryControl : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkEm7500_Kale> BossActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkEm7500_StageController> StageController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500AttackNoticeParam> AttackNoticeParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayToTheEndPhase1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayToTheEndPhase3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> RhythmParryTextureArray;
    
public:
    AHbkEm7500_RhythmParryControl(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStageController(AHbkEm7500_StageController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void SetEndFinishCamera(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetBossActor(AHbkEm7500_Kale* Actor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEndAttackNotice(AHbkEnemyCharacter* Attacker, FBossRhythmAttackParam RhythmAttackParam);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSucceed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunning() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeRhythmParry(EHbkEm7500RhythmParryType Type);
    
    UFUNCTION(BlueprintCallable)
    void AbortRhythmParry();
    
};

