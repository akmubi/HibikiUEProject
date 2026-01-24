#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TngGameSystem.h"
#include "HbkMapManager.generated.h"

class AActor;
class UDataTable;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkMapManager : public UTngGameSystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStreamingLoading);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UDataTable*> MapGameFlag;
    
public:
    UHbkMapManager();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetEmissiveColorForLevel(UObject* WorldContextObject, int32 Handle, FName TagName, FLinearColor Color, float Intensity);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetAnalyticFogCompHiddenForLevel(UObject* WorldContextObject, int32 Handle, FName TagName, bool hidden);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetActorsTagForTutorialStage(const UObject* WorldContextObject, const int32 Handle, const TArray<FName>& tagNames, const bool Hide, const float Intensity);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetActorsHiddenForLevel(UObject* WorldContextObject, int32 Handle, FName TagName, bool hidden);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    TSoftObjectPtr<UObject> ObjectPathToDynamicPath(UObject* WorldContextObject, TSoftObjectPtr<UObject> SoftObjectPtr, int32 Handle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void GetActorsWithTagForLevelInstance(UObject* WorldContextObject, int32 Handle, FName TagName, TArray<AActor*>& OutActors);
    
};

