// TODO DEBUGGING
#define DWG_TYPE DWG_TYPE_MTEXTOBJECTCONTEXTDATA
#include "common.c"

void
api_process (dwg_object *obj)
{
  int error, isnew;
  BITCODE_BS class_version; /*!< r2010+ =3 */
  BITCODE_B is_default;
  BITCODE_B in_dwg;
  BITCODE_H scale;
  BITCODE_3BD insertion_pt;
  BITCODE_3BD x_axis_dir;
  BITCODE_BD text_height;
  BITCODE_BD rect_width;
  BITCODE_BD extents_height;
  BITCODE_BD extents_width;
  BITCODE_BD column_width;
  BITCODE_BD gutter;
  BITCODE_B auto_height;
  BITCODE_B flow_reversed;
  BITCODE_BL column_type;
  BITCODE_BL i, num_column_heights;
  BITCODE_BD *column_heights;

  Dwg_Version_Type dwg_version = obj->parent->header.version;
#ifdef DEBUG_CLASSES
  dwg_obj_mtextobjectcontextdata *_obj = dwg_object_to_MTEXTOBJECTCONTEXTDATA (obj);

  CHK_ENTITY_TYPE (_obj, MTEXTOBJECTCONTEXTDATA, class_version, BS);
  CHK_ENTITY_TYPE (_obj, MTEXTOBJECTCONTEXTDATA, is_default, B);
  CHK_ENTITY_TYPE (_obj, MTEXTOBJECTCONTEXTDATA, in_dwg, B);
  CHK_ENTITY_H (_obj, MTEXTOBJECTCONTEXTDATA, scale);

  CHK_ENTITY_3RD (_obj, MTEXTOBJECTCONTEXTDATA, insertion_pt);
  CHK_ENTITY_3RD (_obj, MTEXTOBJECTCONTEXTDATA, x_axis_dir);
  CHK_ENTITY_TYPE (_obj, MTEXTOBJECTCONTEXTDATA, text_height, BD);
  CHK_ENTITY_TYPE (_obj, MTEXTOBJECTCONTEXTDATA, rect_width, BD);
  CHK_ENTITY_TYPE (_obj, MTEXTOBJECTCONTEXTDATA, extents_height, BD);
  CHK_ENTITY_TYPE (_obj, MTEXTOBJECTCONTEXTDATA, extents_width, BD);

  CHK_ENTITY_TYPE (_obj, MTEXT, column_type, BL);
  CHK_ENTITY_MAX  (_obj, MTEXT, column_type, BL, 2);
  CHK_ENTITY_TYPE (_obj, MTEXT, num_column_heights, BL);
  CHK_ENTITY_TYPE (_obj, MTEXT, column_width, BD);
  CHK_ENTITY_TYPE (_obj, MTEXT, gutter, BD);
  CHK_ENTITY_TYPE (_obj, MTEXT, auto_height, B);
  CHK_ENTITY_TYPE (_obj, MTEXT, flow_reversed, B);
  CHK_ENTITY_VECTOR_TYPE (_obj, MTEXT, column_heights, num_column_heights, BD);
#endif
}
