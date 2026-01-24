#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkTalkFace2DKitPack.generated.h"

class UHbkTalkFace2DKit;

UCLASS(Blueprintable)
class HIBIKI_API UHbkTalkFace2DKitPack : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UHbkTalkFace2DKit*> FaceKits;
    
    UHbkTalkFace2DKitPack();

};

