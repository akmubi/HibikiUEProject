#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HbkMeshKitFunction.generated.h"

class AActor;

UCLASS(Blueprintable)
class HIBIKI_API UHbkMeshKitFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHbkMeshKitFunction();

    UFUNCTION(BlueprintCallable)
    static void SetActorMeshKit(AActor* TargetActor, FName KitName, bool bShow, int32 LODIndex);
    
};

