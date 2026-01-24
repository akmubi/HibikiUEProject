#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickCurveType_t.h"
#include "EHbkNote.h"
#include "HbkFlashLightComponentMaterialFlash_t.h"
#include "HbkFlashLightFlickInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkFlashLightFlickInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote NoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickCurveType_t curveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BeatCountArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkFlashLightComponentMaterialFlash_t> MeshInfoArray;
    
    HIBIKI_API FHbkFlashLightFlickInfo_t();
};

