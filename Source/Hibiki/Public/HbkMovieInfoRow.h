#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkMovieInfo_Bink.h"
#include "HbkMovieInfo_MP4.h"
#include "HbkMovieInfoRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkMovieInfoRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMovieInfo_MP4 MP4Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMovieInfo_Bink BinkInfo;
    
    HIBIKI_API FHbkMovieInfoRow();
};

