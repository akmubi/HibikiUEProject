#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HbkAm0000_BPFunctionLibrary.generated.h"

class UHbkAnimInstance;

UCLASS(Blueprintable)
class UHbkAm0000_BPFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHbkAm0000_BPFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void UpdateTailFlameMaterial(UHbkAnimInstance* AnimInstance, const FName& materialSlotName, const FName& SocketName);
    
};

