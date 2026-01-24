#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "HbkMeshKit.h"
#include "HbkMeshKitData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkMeshKitData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkMeshKit> MeshKit;
    
    UHbkMeshKitData();

};

