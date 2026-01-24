#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkItemViewWidget.generated.h"

class UHbkPieceGetPopupWidget;
class UImage;
class UTexture2D;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkItemViewWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> ItemPieceImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> ItemPieceTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> SetUpAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> OpenAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* NormalLoopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CompleteLoopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPieceNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WhiteLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPieceGetPopupWidget* OwnerWidget;
    
public:
    UHbkItemViewWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SetWhiteOutValue();
    
public:
    UFUNCTION(BlueprintCallable)
    void OpenWidget();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init_Blueprint();
    
};

