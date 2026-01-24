#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkGimmickBoneAnimInfo_t.h"
#include "HbkGimmickMoveAnimCommonInfo_t.h"
#include "HbkGimmickRotateAnimInfo_t.h"
#include "HbkGimmickScaleAnimInfo_t.h"
#include "HbkGimmickTransAnimInfo_t.h"
#include "HbkGimmickMoveAnimComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkGimmickMoveAnimComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickMoveAnimCommonInfo_t commonInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickScaleAnimInfo_t ScaleInBattleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickTransAnimInfo_t TransInBattleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickRotateAnimInfo_t RotateInBattleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickScaleAnimInfo_t ScaleNoBattleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickTransAnimInfo_t TransNoBattleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickRotateAnimInfo_t RotateNoBattleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickBoneAnimInfo_t> BoneAnimInfoArray;
    
public:
    UHbkGimmickMoveAnimComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SyncStopMoveAnim();
    
    UFUNCTION(BlueprintCallable)
    void StopMoveAnim();
    
    UFUNCTION(BlueprintCallable)
    void OnDeactivateGimmick(AActor* Activator);
    
    UFUNCTION(BlueprintCallable)
    void OnDeactivate(AActor* Activator);
    
    UFUNCTION(BlueprintCallable)
    void OnceMoveAnim();
    
    UFUNCTION(BlueprintCallable)
    void OnActivateGimmick(AActor* Activator);
    
    UFUNCTION(BlueprintCallable)
    void OnActivate(AActor* Activator);
    
    UFUNCTION(BlueprintCallable)
    void ClearMoveAnim();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BeatEvent_RhythmScaleType(const int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void BeatEvent_RhythmMoveType(const int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void BeatEvent_Button(const int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void BattleChangeAnimation();
    
};

