#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EHbkAttackRangeType.h"
#include "EHbkDifficultyType.h"
#include "HbkBossSelectTagInfoList.h"
#include "HbkBossSelectTagInfoRecord.h"
#include "HbkBossSelectTagInfoReserve.h"
#include "HbkBossSelectTagInfoRestrict.h"
#include "HbkBossSelectTagComponent.generated.h"

class UHbkBossSelectTagInfoListAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkBossSelectTagComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBossSelectTagInfoList> SelectTagInfoLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ValidSelectTagIndexList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ContinueInhibitionRateList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkBossSelectTagInfoListAsset* SelectTagInfoListAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBossSelectTagInfoRecord> SelectTagInfoRecordList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RecordNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RecordIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReserveSelectedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBossSelectTagInfoReserve> ReserveTagInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBossSelectTagInfoReserve> DigestedReserveTagInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBossSelectTagInfoRestrict> RestrictTagInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUseEvaluation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SelectedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PrevSelectedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BeforehandSelectedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkDifficultyType DifficultyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPriorityGivenToReservedTagsWhenSelectingDebug;
    
public:
    UHbkBossSelectTagComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRestrictTag(const FHbkBossSelectTagInfoRestrict& Restrict);
    
    UFUNCTION(BlueprintCallable)
    void SetReserveTag(const FHbkBossSelectTagInfoReserve& Reserve);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideSelectedTag(const FGameplayTag& OverrideTag);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficultyType(EHbkDifficultyType Type);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag SelectTagToRange(int32 StateIndex, EHbkAttackRangeType RangeType);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag SelectTag(int32 StateIndex);
    
    UFUNCTION(BlueprintCallable)
    void PushInvalidRecordSelectTag();
    
    UFUNCTION(BlueprintCallable)
    bool IsReserveTag(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    bool IsReserveSelectedTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeforehandSelectedTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetSelectedTag() const;
    
    UFUNCTION(BlueprintCallable)
    void GetReserveTagList(TArray<FGameplayTagContainer>& ReserveTagList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetPrevSelectedTag() const;
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetBeforehandSelectedTag();
    
    UFUNCTION(BlueprintCallable)
    void ClearSelectedTag();
    
    UFUNCTION(BlueprintCallable)
    void ClearRestrictTag();
    
    UFUNCTION(BlueprintCallable)
    void ClearReserveTag(bool bIsForce);
    
    UFUNCTION(BlueprintCallable)
    void ClearRecordSelectTag();
    
    UFUNCTION(BlueprintCallable)
    void ClearDigestedRestrictTag();
    
    UFUNCTION(BlueprintCallable)
    void ClearDigestedReserveSelectedTag();
    
    UFUNCTION(BlueprintCallable)
    void ClearBeforehandSelectedTag();
    
    UFUNCTION(BlueprintCallable)
    void CancelReserveTag(const FGameplayTag& CancelTag, bool bIsForce);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag BeforehandSelectTag(int32 StateIndex);
    
};

