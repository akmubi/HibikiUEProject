#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EHbkAttackRangeType.h"
#include "HbkAttackAnimRepParam.h"
#include "HbkAttackAnimSectionRepParam.h"
#include "HbkEnemyAttackAnimInfo.h"
#include "HbkEnemyAttackBasicInfo.h"
#include "HbkEnemyAttackInfo.h"
#include "HbkEnemyAttackInfoList.h"
#include "HbkEnemyLastAttackInfo.h"
#include "HbkEnemyAttackInfoComponent.generated.h"

class UAnimMontage;
class UHbkEnemyAttackInfoAsset;
class UHbkEnemyAttackInfoAssetTest;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkEnemyAttackInfoComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEnemyAttackInfo> AttackInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEnemyAttackInfoList> AttackInfoLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEnemyAttackInfo> OtherAttackInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkEnemyAttackInfoAsset* AttackInfoAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkEnemyAttackInfoAssetTest* AttackInfoAssetTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEnemyLastAttackInfo LastAttackInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkAttackRangeType DefaultBattleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistShortRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistMiddleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistLongRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttackAnimRepParam, meta=(AllowPrivateAccess=true))
    FHbkAttackAnimRepParam AttackAnimRepParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AnimSectionRepParam, meta=(AllowPrivateAccess=true))
    FHbkAttackAnimSectionRepParam AnimSectionRepParam;
    
public:
    UHbkEnemyAttackInfoComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool SetUseAttackInfoIndex(int32 AttackInfoIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetNextAttackInfo(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool SetNextAttackBasicInfo(FGameplayTag AttackNameTag);
    
    UFUNCTION(BlueprintCallable)
    void ResetAttackInfoList();
    
    UFUNCTION(BlueprintCallable)
    void PerformAttackWithMontage(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void PerformAttack2(const FHbkEnemyAttackAnimInfo& AnimInfo);
    
    UFUNCTION(BlueprintCallable)
    void PerformAttack(const FHbkEnemyAttackInfo& attackInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_AttackAnimRepParam();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AnimSectionRepParam();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMatchLastAttackTag(FGameplayTag CheckAttackTag) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetOtherAttackInfo(int32 Index, FHbkEnemyAttackInfo& attackInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkAttackRangeType GetDefaultBattleRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentAttackTypeTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentAttackInfo(FHbkEnemyAttackInfo& OutAttackInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentAttackAnimTag() const;
    
    UFUNCTION(BlueprintCallable)
    EHbkAttackRangeType GetAttackRangeFromDist(float DistanceToTarget);
    
    UFUNCTION(BlueprintCallable)
    bool GetAttackInfoFromRange(EHbkAttackRangeType RangeType, FHbkEnemyAttackInfo& OutAttackInfo);
    
    UFUNCTION(BlueprintCallable)
    bool GetAttackBasicInfo(FGameplayTag AttackNameTag, FHbkEnemyAttackBasicInfo& attackInfo);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMontageSection(FName SectionName, bool JumpTo);
    
    UFUNCTION(BlueprintCallable)
    void ChangeAttackInfoList(int32 Index);
    
};

