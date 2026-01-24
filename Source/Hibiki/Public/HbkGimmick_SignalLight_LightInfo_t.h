#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_LightEmissiveColorType_t.h"
#include "EHbkGimmick_LightEmissiveKindType_t.h"
#include "HbkGimmick_SignalLight_LightInfo_t.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkGimmick_SignalLight_LightInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useEmiTex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useEmiColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHbkGimmick_LightEmissiveColorType_t> ColorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHbkGimmick_LightEmissiveKindType_t> kindType;
    
    FHbkGimmick_SignalLight_LightInfo_t();
};

