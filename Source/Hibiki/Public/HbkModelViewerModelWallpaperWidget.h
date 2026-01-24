#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkModelViewerModelWallpaperWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UHbkModelViewerModelWallpaperWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> Textures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BgOffTexture;
    
public:
    UHbkModelViewerModelWallpaperWidget();

};

