#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_Magnet_VariableNoteParam_t.h"
#include "HbkGimmick_Magnet_VariableInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_Magnet_VariableInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_Magnet_VariableNoteParam_t> VariableNoteParams;
    
    HIBIKI_API FHbkGimmick_Magnet_VariableInfo_t();
};

