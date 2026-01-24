#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ResidentTexturesTNG.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UResidentTexturesTNG : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> AOVolumeTextures;
    
public:
    UResidentTexturesTNG();

};

