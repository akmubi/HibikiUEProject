#pragma once
#include "CoreMinimal.h"
#include "HbkSimpleTutorialBaseWidget.h"
#include "HbkTutorialCmdOnlyWidget.generated.h"

class UTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTutorialCmdOnlyWidget : public UHbkSimpleTutorialBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ImageParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float XLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Reverse;
    
public:
    UHbkTutorialCmdOnlyWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUp_BP();
    
};

