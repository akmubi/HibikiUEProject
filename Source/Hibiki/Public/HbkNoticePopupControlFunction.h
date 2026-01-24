#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "HbkNoticePopupControlFunction.generated.h"

class UObject;

UCLASS(Blueprintable)
class UHbkNoticePopupControlFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHbkNoticePopupControlFunction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowRequest_Submission(UObject* WorldContextObject, FText Text, int32 ClearedMissionNum, int32 MaxMissionNum);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowRequest_ItemGet(UObject* WorldContextObject, FGameplayTag InventoryId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowRequest_FoundGraffiti(UObject* WorldContextObject, int32 GetGrafNum, int32 MaxGrafNum);
    
};

