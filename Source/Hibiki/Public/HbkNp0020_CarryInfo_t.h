#pragma once
#include "CoreMinimal.h"
#include "HbkNp0020_CarryInfo_t.generated.h"

class AHbkGimmick_DroneCargo;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkNp0020_CarryInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkGimmick_DroneCargo* CarryCargo;
    
    FHbkNp0020_CarryInfo_t();
};

