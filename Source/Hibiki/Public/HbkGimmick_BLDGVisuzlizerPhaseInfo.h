#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_BLDGVisuzlizerFlipbookInfo.h"
#include "HbkGimmick_BLDGVisuzlizerSpectrumInfo.h"
#include "HbkGimmick_BLDGVisuzlizerPhaseInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_BLDGVisuzlizerPhaseInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtIntValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_BLDGVisuzlizerFlipbookInfo FlipBookInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_BLDGVisuzlizerSpectrumInfo SpectrumInfo;
    
    HIBIKI_API FHbkGimmick_BLDGVisuzlizerPhaseInfo();
};

