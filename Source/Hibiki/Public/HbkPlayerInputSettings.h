#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkPlayerInputKeyRemapping.h"
#include "HbkPlayerInputSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Input)
class UHbkPlayerInputSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkPlayerInputKeyRemapping> AzertyKeyRemapings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkPlayerInputKeyRemapping> QwertzKeyRemapings;
    
    UHbkPlayerInputSettings();

};

