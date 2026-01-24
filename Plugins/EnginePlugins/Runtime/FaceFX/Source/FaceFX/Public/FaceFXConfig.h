#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFaceFXBlendMode.h"
#include "FaceFXConfig.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class FACEFX_API UFaceFXConfig : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaceFXBlendMode DefaultBlendMode;
    
public:
    UFaceFXConfig();

};

