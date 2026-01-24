#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkCharacterShadowTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkCharacterShadowTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoCalculateShadowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CharacterShadowOffsetAuto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CharacterShadowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CharacterShadowOffsetScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CharacterShadowAttenuationRadiusScale;
    
    HIBIKI_API FHbkCharacterShadowTableRow();
};

