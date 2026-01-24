#pragma once
#include "CoreMinimal.h"
#include "HbkNoticePopupRequestParam.h"
#include "HbkNoticePopupRequestParam_FoundGraffiti.generated.h"

USTRUCT(BlueprintType)
struct FHbkNoticePopupRequestParam_FoundGraffiti : public FHbkNoticePopupRequestParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 GetGrafNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 MaxGrafNum;
    
    HIBIKI_API FHbkNoticePopupRequestParam_FoundGraffiti();
};

