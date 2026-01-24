#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTask.h"
#include "EHbkScrollBattle_ScrollMapKind_t.h"
#include "HbkGameplayTask_EVScrollBattle.generated.h"

class UHbkGameplayTask_EVScrollBattle;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_EVScrollBattle : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskScrollBattle_OnSuccess);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskScrollBattle_OnLoadSuccess);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskScrollBattle_OnFailure);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkTaskScrollBattle_OnEndScroll, TEnumAsByte<EHbkScrollBattle_ScrollMapKind_t>, mapKind);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskScrollBattle_OnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskScrollBattle_OnLoadSuccess OnLoadSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskScrollBattle_OnFailure OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskScrollBattle_OnEndScroll OnEndScroll;
    
    UHbkGameplayTask_EVScrollBattle(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void MidiEvent_E5(int32 NoteNo, int32 Velocity);
    
    UFUNCTION(BlueprintCallable)
    void MidiEvent_C5(int32 NoteNo, int32 Velocity);
    
    UFUNCTION(BlueprintCallable)
    void LevelScrollStop();
    
    UFUNCTION(BlueprintCallable)
    void LevelScrollStart();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EVScrollBattle* EventScrollBattle(UObject* WorldContextObject, float scrollSpeed, float repeatDistance, FGameplayTag playTag, FName mainBasePointCallSign, FName mapBasePointCallSign, FName routeSplineCallSign, FName connectStartCallSign, FName connectEndCallSign, FName playCallSign, TArray<FName> loadAssetLevelNameArray, const bool preLoadLevel, const bool moveRotate, const int32 startPhase);
    
    UFUNCTION(BlueprintCallable)
    void ClearYellowPole();
    
    UFUNCTION(BlueprintCallable)
    void AddRandomCurveLevelScroll(bool LeftAndRight, bool UpAndDown);
    
    UFUNCTION(BlueprintCallable)
    void AddLevelScroll(TArray<TEnumAsByte<EHbkScrollBattle_ScrollMapKind_t>> addMapKindArray, const bool repeat);
    
};

