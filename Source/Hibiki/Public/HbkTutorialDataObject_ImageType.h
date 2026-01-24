#pragma once
#include "CoreMinimal.h"
#include "HbkTutorialDataObject.h"
#include "HbkTutorialDataObject_ImageType.generated.h"

class UMaterialInterface;
class UTexture2D;

UCLASS(Blueprintable)
class HIBIKI_API UHbkTutorialDataObject_ImageType : public UHbkTutorialDataObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* TutorialImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TutorialImage_XB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TutorialImage_PS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BinkID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BinkMovieMaterial;
    
    UHbkTutorialDataObject_ImageType();

};

