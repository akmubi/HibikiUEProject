#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Camera/CameraTypes.h"
#include "GameplayTagContainer.h"
#include "EHbkGimmickRoboShakeRTPCType.h"
#include "EHbkNote.h"
#include "Templates/SubclassOf.h"
#include "HbkGimmick_RoboShakeControllerFunction.generated.h"

class UCameraShakeBase;
class UObject;

UCLASS(Blueprintable)
class UHbkGimmick_RoboShakeControllerFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHbkGimmick_RoboShakeControllerFunction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopRoboShake(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartRoboShake(UObject* WorldContextObject, EHbkNote NoteType, int32 NoteCount, TSubclassOf<UCameraShakeBase> CameraShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReserveRoboShakeActivate(UObject* WorldContextObject, FGameplayTagContainer TagContainer, FGameplayTagContainer LoopTags);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ChangeRoboShakeRTPC(UObject* WorldContextObject, EHbkGimmickRoboShakeRTPCType Type);
    
};

