#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "HbkObjectFunction.generated.h"

class UHbkImproveAttackComponent;
class USceneComponent;

UCLASS(Blueprintable)
class HIBIKI_API UHbkObjectFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHbkObjectFunction();

    UFUNCTION(BlueprintCallable)
    static UHbkImproveAttackComponent* GetAttackComponent(USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAttach, bool bDestroy, float Duration);
    
};

