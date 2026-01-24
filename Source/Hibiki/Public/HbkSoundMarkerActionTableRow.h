#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkSoundMarkerActionTableRow.generated.h"

class UFaceFXAnim;

USTRUCT(BlueprintType)
struct FHbkSoundMarkerActionTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ActionVoiceSpeaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ActionVoiceLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopOtherACVs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFaceFXAnim* FaceFXAnim;
    
    HIBIKI_API FHbkSoundMarkerActionTableRow();
};

