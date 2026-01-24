#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HbkAttackHitLog.h"
#include "HbkAttackHitShapeInfo.h"
#include "HbkAttackMoveInfo.h"
#include "Templates/SubclassOf.h"
#include "HbkImproveAttackComponent.generated.h"

class AActor;
class UDamageType;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkImproveAttackComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DefaultDamageType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkAttackHitShapeInfo DefaultHitShapeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkAttackHitShapeInfo HitShapeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHbkAttackHitLog> AttackHitLogs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IgnoredActorList;
    
public:
    UHbkImproveAttackComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetHitShapeInfo(const FHbkAttackHitShapeInfo& ShapeInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackMoveInfo(const FHbkAttackMoveInfo InMoveInfo);
    
    UFUNCTION(BlueprintCallable)
    void RefreshAttack();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRefreshAttackTakeBeat(int32 NoteCount, bool bOnBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnRefreshAttack(int32 NoteCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttacking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UDamageType> GetDamageType() const;
    
    UFUNCTION(BlueprintCallable)
    void EndAttack();
    
    UFUNCTION(BlueprintCallable)
    void BeginAttack();
    
};

