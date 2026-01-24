#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_LightEmissiveColorType_t.h"
#include "EHbkGimmick_LightEmissiveKindType_t.h"
#include "HbkGimmickEmissiveParam_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickEmissiveParam_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useEmiTex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useEmiColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHbkGimmick_LightEmissiveColorType_t> ColorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHbkGimmick_LightEmissiveKindType_t> kindType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceIntensity;
    
    HIBIKI_API FHbkGimmickEmissiveParam_t();
};

