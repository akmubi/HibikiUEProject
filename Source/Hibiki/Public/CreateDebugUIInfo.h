#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CreateDebugUIInfo.generated.h"

class UHbkDebugWidgetBase;

USTRUCT(BlueprintType)
struct FCreateDebugUIInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UHbkDebugWidgetBase>> CreateUIClassList;
    
    HIBIKI_API FCreateDebugUIInfo();
};

