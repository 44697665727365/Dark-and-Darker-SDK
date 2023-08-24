#pragma once 
#include <WB_ContextMenu_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_ContextMenu.WB_ContextMenu_C
// Size: 0x328(Inherited: 0x318)
struct UWB_ContextMenu_C : UContextMenuWidgetBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x318 (0x318)
	struct UCanvasPanel* CanvasPanel_47;  // 0x320 (0x320)


	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WB_ContextMenu.WB_ContextMenu_C.OnMouseButtonDown
	void BndEvt__WB_ContextMenu_ListView_ContextOptions_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature(struct UObject* Item, struct UUserWidget* Widget); // Function WB_ContextMenu.WB_ContextMenu_C.BndEvt__WB_ContextMenu_ListView_ContextOptions_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature
	void ExecuteUbergraph_WB_ContextMenu(int32_t EntryPoint); // Function WB_ContextMenu.WB_ContextMenu_C.ExecuteUbergraph_WB_ContextMenu
}; 
 
 


