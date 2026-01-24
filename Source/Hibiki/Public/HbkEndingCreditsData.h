#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkEndingCreditsDataType.h"
#include "EHbkEndingCreditsSpaceSizeType.h"
#include "EHbkEndingCreditsTextureType.h"
#include "HbkEndingCreditsData.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEndingCreditsData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEndingCreditsDataType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEndingCreditsSpaceSizeType SpaceSizeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEndingCreditsTextureType TextureType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float scrollSpeed;
    
    FHbkEndingCreditsData();
};

