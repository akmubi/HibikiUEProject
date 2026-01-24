#pragma once
#include "CoreMinimal.h"
#include "HbkTutorialDataObject.h"
#include "HbkTutorialDataObject_MovieType.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class HIBIKI_API UHbkTutorialDataObject_MovieType : public UHbkTutorialDataObject {
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
    
    UHbkTutorialDataObject_MovieType();

};

