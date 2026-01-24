#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "DynamicLoadAssetsOnTrainingRoomController.h"
#include "EHbkEnemyCategoryType.h"
#include "EHbkPartnerAttackType.h"
#include "EHbkPartnerType.h"
#include "EHbkReverbGaugeConsumeType.h"
#include "HbkTrainingRoomLoadEnemyData.h"
#include "Templates/SubclassOf.h"
#include "HbkTrainingRoomController.generated.h"

class AHbkEnemyCharacter;
class AHbkPlayerCharacterBase;
class UAkAudioEvent;
class UHbkInventoryObject_Skill;
class UHbkMagneticPointComponent;
class UHbkTrainingRoomDataAsset;
class UHbkTrainingRoomWidget;
class UHbkTrainingRoom_TrainingInfoWidget;

UCLASS(Blueprintable)
class AHbkTrainingRoomController : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PlayerStartActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitializeDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkTrainingRoomDataAsset* TrainingRoomDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentCommandTag_Battle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentCommandTag_Inv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnemyAIChangeDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoverReverbCheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoverHealthCheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_BaseMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_MusicState_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_MusicState_Fast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MusicStateFastEnableStageNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_GotoHideOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_RestoreVolumeGotoHideOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_StartTraining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_RestoreVolumeStartTraining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTrainingRoomWidget> TrainingRoomWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkTrainingRoomWidget* MenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTrainingRoom_TrainingInfoWidget> PracticeInfoWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkTrainingRoom_TrainingInfoWidget* PracticeInfoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHbkTrainingRoomLoadEnemyData> LoadedEnemyDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EHbkEnemyCategoryType, FText> EnemyInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkEnemyCharacter* SpawnedEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, bool> PlayerSkillInfoMap;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TWeakObjectPtr<UHbkInventoryObject_Skill>> PlayerSkillObjectMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnemyRespawnInterval;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> LoadAssetsPathArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDynamicLoadAssetsOnTrainingRoomController> DynamicLoadAssetList;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AHbkEnemyCharacter>> DynamicSpawnedEnemyList;
    
public:
    AHbkTrainingRoomController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMusicState(bool bFast);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableViewRhythmAssist(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableViewLife(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableUnDeadEnemy(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableRecoveryReverb(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableEnemyAI(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void PressReset();
    
    UFUNCTION(BlueprintCallable)
    void PressKeyOption();
    
    UFUNCTION(BlueprintCallable)
    void PressCancel();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRhythmDodgeTrigger();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerHealthDamage(float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnParrySuccessPerfect();
    
    UFUNCTION(BlueprintCallable)
    void OnParrySuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnMagnetReached(AHbkPlayerCharacterBase* Player, UHbkMagneticPointComponent* MagneticPoint);
    
    UFUNCTION(BlueprintCallable)
    void OnMagnetBackStab(AHbkPlayerCharacterBase* Player, UHbkMagneticPointComponent* MagneticPoint);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnGotoHideOutTiming();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEnemyEndDrain(AHbkEnemyCharacter* DrainPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyDestroy();
    
    UFUNCTION(BlueprintCallable)
    void OnDynamicSpawnedEnemy(AHbkEnemyCharacter* DynamicSpawnEnemy);
    
    UFUNCTION(BlueprintCallable)
    void OnDodgeStart();
    
    UFUNCTION(BlueprintCallable)
    void OnDirectionalParrySuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnConsumePlayerReverbGauge(EHbkReverbGaugeConsumeType ConsumeType);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginPartnerChargeAttack(EHbkPartnerType PartnerType, EHbkPartnerAttackType AttackType);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginPartnerAttack(EHbkPartnerType PartnerType, EHbkPartnerAttackType AttackType);
    
    UFUNCTION(BlueprintCallable)
    void OnAttackAnimStart(const FGameplayTag& AttackTag, int32 ComboCount);
    
    UFUNCTION(BlueprintCallable)
    void OnAirParrySuccess();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMusicStateFast() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnemyAIState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableViewLife() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableUnDeadEnemy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableRecoveryReverb() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkEnemyCategoryType GetCurrentEnemyCategory() const;
    
};

