#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EHbkEm6000_BodyMeshType.h"
#include "HbkEm6000_BodyMeshInfo.h"
#include "HbkEm6000_BodyMeshInfoAsset.generated.h"

UCLASS(Blueprintable)
class UHbkEm6000_BodyMeshInfoAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkEm6000_BodyMeshType, FHbkEm6000_BodyMeshInfo> BodyMeshInfos;
    
    UHbkEm6000_BodyMeshInfoAsset();

};

