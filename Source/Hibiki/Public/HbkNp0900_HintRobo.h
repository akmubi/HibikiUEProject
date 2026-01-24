#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EHbkNp0900_ActionType.h"
#include "EHbkNp0900_BoardType.h"
#include "EHbkNp0900_ShortDisHologramType.h"
#include "HbkNp0900_ChaseInfo.h"
#include "HbkNp0900_HintRoboActionAnimData.h"
#include "HbkNpcCharacter.h"
#include "HbkTalkContext.h"
#include "Templates/SubclassOf.h"
#include "HbkNp0900_HintRobo.generated.h"

class AActor;
class AController;
class AHbkHintRoboManagerActor;
class AHbkTalkSession;
class UAnimInstance;
class UDamageType;
class UDataTable;
class UHbkComboJudgeComponent;
class UHbkDamageComponent;
class UHbkInteractTargetComponent;
class UHbkNp0900_AnimInstanceBase;
class UHbkNpcDamageReaction;
class UHbkShowNewTutorialTask;
class UHbkSkeletalMeshComponent;
class UHbkTutorialFooterButtonWidget;

UCLASS(Blueprintable)
class HIBIKI_API AHbkNp0900_HintRobo : public AHbkNpcCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotatoToPlayerSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetCameraAnglePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetCameraAngleYawOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetCameraDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetCameraBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<EHbkNp0900_BoardType, UHbkSkeletalMeshComponent*> BoradMeshList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkDamageComponent* DamageComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkComboJudgeComponent* ComboJudgeComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkHintRoboManagerActor> HintRoboManagerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ManagementIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimInstance* SmallBoardAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimInstance* MediumBoardAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimInstance* LargeBoardAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EHbkNp0900_BoardType, UHbkNp0900_AnimInstanceBase*> BoradAnimInstanceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkNpcDamageReaction* DamageReactionListAsset_Combo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkNp0900_BoardType, UHbkNpcDamageReaction*> DamageReactionListAssets_Board;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkNp0900_ActionType, FHbkNp0900_HintRoboActionAnimData> ActionAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EHbkNp0900_ActionType> EnabledStopActionListByDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTutorialFooterButtonWidget> FooterButtonWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotInteractAccentIntervalMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotInteractAccentIntervalMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TalkDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BehaviorTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkNp0900_ChaseInfo> ChaseInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IgnoreRection_IgnoreMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IgnoreRection_MoveMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNp0900_ShortDisHologramType ShortDisHologramType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeaveJudgeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFirstTalkByDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstTalkDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeaveJudgeDistanceOnFirstTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkShowNewTutorialTask*> TutorialTaskList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkInteractTargetComponent* InteractTargetComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* LongDisHologramMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* ShortDisHologramMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* ShortDisHologramMesh_Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* ShortDisHologramMesh_Battle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* ShortDisHologramMesh_Game;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* ShortDisHologramMesh_Setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* SmallBoardMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* MediumBoardMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* LargeBoardMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* RecoverItemMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkTalkSession* TalkSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkTutorialFooterButtonWidget* FooterButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> InputActionBindingHandles;
    
public:
    AHbkNp0900_HintRobo(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void WaitEndByBeat(int32 noteCnt, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseCancel_Talk();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseCancel_Player();
    
    UFUNCTION(BlueprintCallable)
    void Receive_PostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void PressCancel_Talk();
    
    UFUNCTION(BlueprintCallable)
    void PressCancel_Player();
    
    UFUNCTION(BlueprintCallable)
    void OnInteraction(AActor* Interactor);
    
    UFUNCTION(BlueprintCallable)
    void OnComboSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnComboFailure();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeTutorialPage(int32 CurrentHierarchyNum);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeSignificance(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlapChaseTrigger(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void EndTutorial();
    
    UFUNCTION(BlueprintCallable)
    void EndTalk(const FHbkTalkContext TalkContext);
    
    UFUNCTION(BlueprintCallable)
    void BeginTalk();
    
    UFUNCTION(BlueprintCallable)
    void AbortFlowOnTalk();
    
    UFUNCTION(BlueprintCallable)
    void AbortFlow();
    
};

