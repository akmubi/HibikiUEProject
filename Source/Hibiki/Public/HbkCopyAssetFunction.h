#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HbkCopyAssetFunctionInfo.h"
#include "HbkCopyAssetFunction.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkCopyAssetFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHbkCopyAssetFunction();

    UFUNCTION(BlueprintCallable)
    static void CopyAsset(FHbkCopyAssetFunctionInfo funcInfo);
    
};

