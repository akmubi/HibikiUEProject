#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_LoadLevel.generated.h"

class UHbkGameplayTask_LoadLevel;
class UHbkLoadLevelInstanceAssetData;
class ULevelStreamingDynamic;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameplayTask_LoadLevel : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskLoadLevelDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskLoadLevelDelegate OnSuccess;
    
    UHbkGameplayTask_LoadLevel(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_LoadLevel* RequestLoadLevel(UObject* WorldContextObject, UHbkLoadLevelInstanceAssetData* pAssetData, const FName levelInfoName, int32 mapHandle, FGameplayTagContainer InitializeTagContainer, bool AddPathFlag);
    
    UFUNCTION(BlueprintCallable)
    void GetLoadLevelStreamingArray(TArray<ULevelStreamingDynamic*>& Out_levelArray);
    
    UFUNCTION(BlueprintCallable)
    int32 GetHandle();
    
};

