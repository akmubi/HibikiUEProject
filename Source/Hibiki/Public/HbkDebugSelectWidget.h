#pragma once
#include "CoreMinimal.h"
#include "Widgets/Layout/Anchors.h"
#include "CreateDebugUIInfo.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkDebugSelectWidget.generated.h"

class UCanvasPanel;
class UHbkDebugSelectPartsWidget;
class UHbkDebugWidgetBase;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkDebugSelectWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PartsRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreateDebugUIInfo> DebugWidgetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UHbkDebugWidgetBase>> DebugWidgetClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkDebugSelectPartsWidget> PartsWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCanvasPanel*> DisplayInMultiPageCanvasList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* RootCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* LStickCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnchors ChildPartsAnchors;
    
public:
    UHbkDebugSelectWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpStick(float Value);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterInput();
    
public:
    UFUNCTION(BlueprintCallable)
    void Show();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetChildWidgetLocation();
    
    UFUNCTION(BlueprintCallable)
    void SetChildWidgetInfo(UCanvasPanel* Canvas);
    
    UFUNCTION(BlueprintCallable)
    void RightStick(float Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void RightShoulderReleased();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterInput();
    
public:
    UFUNCTION(BlueprintCallable)
    void PressResetButton();
    
    UFUNCTION(BlueprintCallable)
    void PressCrossRight();
    
    UFUNCTION(BlueprintCallable)
    void PressCrossLeft();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable)
    void LeftShoulderReleased();
    
    UFUNCTION(BlueprintCallable)
    void Hide();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPageIndex() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void Decide();
    
};

