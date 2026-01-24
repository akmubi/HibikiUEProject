#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkPostProcessMaterials.generated.h"

class UMaterialInstance;
class UTexture;

UCLASS(Blueprintable)
class UHbkPostProcessMaterials : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstance*> PostProcessMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* CopyBackBufferWallpaper;
    
public:
    UHbkPostProcessMaterials();

};

