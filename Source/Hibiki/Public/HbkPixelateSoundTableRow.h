#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkPixelateSoundTableRow.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkPixelateSoundTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> GlitchSE;
    
    HIBIKI_API FHbkPixelateSoundTableRow();
};

